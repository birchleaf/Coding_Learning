REMAIN = 0

def Menu():
    """显示主菜单面板
    """
    print("~~~~~~~~~主菜单~~~~~~~~~~~~")
    print("查询金额  【输入1】")
    print(f"存款 【输入2】")
    print("取款 【输入3】")
    print("退出 【输入4】")

def Search(REMAIN):
    """查询余额

    Args:
        REMAIN (float): 余额

    Returns:
        None: 不需要返回值
    """     
    print(f"您的余额为:{REMAIN}")
    return None

def cunkuan():
    """存款
    """
    global REMAIN 
    REMAIN = float(input())
    return None

def qvkuan():
    """取款
    """
    money = float(input("取款金额"))
    global REMAIN
    REMAIN -= money
    return None
while True:
     
    Menu()
   
    SELECT = int(input("请输入您的选择"))

    if(SELECT == 1):
        Search(REMAIN)
   
    elif(SELECT == 2):
        cunkuan()
    
    elif(SELECT == 3):
        qvkuan()
    