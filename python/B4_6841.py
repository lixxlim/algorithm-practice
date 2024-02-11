dic = {
    "CU"    : "see you",
    ":-)"   : "I’m happy",
    ":-("   : "I’m unhappy",
    ";-)"   : "wink",
    ":-P"   : "stick out my tongue",
    "(~.~)" : "sleepy",
    "TA"    : "totally awesome",
    "CCC"   : "Canadian Computing Competition",
    "CUZ"   : "because",
    "TY"    : "thank-you",
    "YW"    : "you’re welcome",
    "TTYL"  : "talk to you later",
}

if __name__ == "__main__" :
    while(True) :
        str = input()
        print(dic[str] if str in dic else str)
        if str == "TTYL" : break
