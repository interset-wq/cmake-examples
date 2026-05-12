"""
Exercise2
"""

def FilterFoo(OutVar: list, *args):
    ARGN: list = args
    for item in ARGN:
        if 'Foo' in item:
            OutVar.append(item)


if __name__ == '__main__':
    # 输入列表（和 CMake 测试用例完全一样）
    InList = ["FooBar", "BarBaz", "FooBaz", "BazBar", "QuxFoo", "BazQux"]
    
    # 输出列表
    OutList = []
    
    # 调用你的 FilterFoo
    FilterFoo(OutList, *InList)
    
    # 判断是否未实现
    if not OutList:
        print("FilterFoo unimplemented or does nothing")
    
    # 测试结果标记
    Failed = False
    
    # 检查必须包含的项
    if "FooBar" not in OutList:
        print("WARNING: OutList does not contain: FooBar")
        Failed = True
    if "FooBaz" not in OutList:
        print("WARNING: OutList does not contain: FooBaz")
        Failed = True
    if "QuxFoo" not in OutList:
        print("WARNING: OutList does not contain: QuxFoo")
        Failed = True
    
    # 检查是否包含非 Foo 项
    extra_items = [item for item in OutList if "Foo" not in item]
    if extra_items:
        print(f"WARNING: OutList contains extra item(s): {extra_items}")
        Failed = True
    
    # 最终成功
    if not Failed:
        print("Success!")