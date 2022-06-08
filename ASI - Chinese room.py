import random
resTxt = ""
swi = 0
swi2 = 0
sensitivity = 90
longcyc = 2
longcyc2 = 3
minPeriod = 1
corr = 2
x = 0.2
y = 0.3
Do = 0
Do2 = 0
it = 0
test = 0
nul = 0
ack = 0
And = 0
Or = 0
cyc = 0
cycle = 0
numa = ""
swif = ""
qu = 0
quc = 0
quc2 = 0
sta = 0
binary = ""
ite = 0
integer = 0
b = 0
bb = 0
receive = ""
data2 = ""
def bitstring_to_bytes(s):
    v = int(s, 2)
    b = bytearray()
    while v:
        b.append(v & 0xff)
        v >>= 8
    return bytes(b[::-1])
def pri(binary):
    proc = binary.split(",")
    totalX = b''
    for char in proc:
        if len(char) == 16:
            totalX += bitstring_to_bytes(char)
    f = open("text.txt", "wb")
    f.write(totalX)
def send():
    global resTxt
    global swi
    global swi2
    global sensitivity 
    global longcyc
    global longcyc2
    global minPeriod
    global corr
    global x
    global y
    global Do
    global Do2
    global it
    global test
    global nul
    global ack
    global And
    global Or
    global cyc
    global cycle
    global numa
    global swif
    global qu
    global quc 
    global quc2
    global sta
    global binary 
    global ite
    global integer
    global b
    global bb
    global receive 
    global data2
    integer = 11700 #message
    resultint = bin( integer )
    msg = "@" + str(ite) + " " + resultint[ite]
    if(msg.find("@0")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@1")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@2")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@3")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@4")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@5")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@6")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@7")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + ","
    if(msg.find("@8")!=-1):
        if(msg.find(" 1")!=-1):
            for a in range(500):
                b = 1
                numa += str(b) + ","
        receive += msg + "," 
def OnMotion(data):
    global resTxt
    global swi
    global swi2
    global sensitivity 
    global longcyc
    global longcyc2
    global minPeriod
    global corr
    global x
    global y
    global Do
    global Do2
    global it
    global test
    global nul
    global ack
    global And
    global Or
    global cyc
    global cycle
    global numa
    global swif
    global qu
    global quc 
    global quc2
    global sta
    global binary 
    global ite
    global integer
    global b
    global bb
    global receive 
    global data2
    sta = 0
    if(Do == 1):
        Do2 = 1
        if(qu == 1 and it == 0):
            qu = 0
            it+=1
        if(qu == 0 and it == 0):
            qu = 1
            it+=1
        it = 0
    if(test == 0):
        b = 0
        bb = 0
        data2 = data
        test+=1
    if(test == 1):
        test = 0
        a = 0
        for a in data:
            if(a > 10):
                b+=1
        if(len(data2) != 0):
            for aa in data2:
                if(aa > 10):
                    if(aa > a or aa < a):
                        bb+=1
        if(qu == 0):
            if(b > 200 and b < 250 or bb > 200 and bb < 250):
                Or+=1
            if(b > 200 and b < 250 and bb > 200 and bb < 250):
                And+=1
                if(Do == 1):
                    if(qu == 1 and it == 0):
                        qu = 0
                        it+=1
                    if(qu == 0 and it == 0):
                        qu = 1
                        it+=1
                    it = 0
        if(qu == 1):
            if(b > 200 and b < 250 or bb > 200 and bb < 250):
                if(Do2 == 1):
                    if(qu == 1 and it == 0):
                        qu = 0
                        it+=1
                    if(qu == 0 and it == 0):
                        qu = 1
                        Do2 = 0
                        it+=1
                    it = 0
                    And+=1
        if(b > 200 and b < 250 and bb > 200 and bb < 250):
            Or+=1
    if(And > corr):
        check = numa.split(",")
        if(check[cyc] == str(qu)):
            if(swi == longcyc):
                qu = random.randint(0,1)
            swi+=1
            Do = 1
            ack+=1
            And = 0
            cyc+=1
            if(sta == 0):
                if(ite != 16):
                    binary += "0"
                    pri(binary)
                    ite+=1
                if(ite == 16):
                    binary += ","
                    ite = 0
                sta = 1
        if(check[cyc] == str(qu)):
            ack+=1
            if(qu == 1 and it == 0):
                qu = 0
                it+=1
            if(qu == 0 and it == 0):
                qu = 1
                it+=1
            it = 0
            if(swi2 == longcyc2):
                qu = random.randint(0,1)
                swi2 = 0
            swi2+=1
            And = 0
            Or = 0
            cyc+=1
            if(sta == 0):
                if(ite != 16):
                    test
                if(ite == 16):
                    binary += ","
                    ite = 0
                sta = 1
    if(Or > corr):
        check = numa.split(",")
        if(check[cyc] == str(qu)):
            ack+=1
            if(qu == 1 and it == 0):
                qu = 0
                it+=1
            if(qu == 0 and it == 0):
                qu = 1
                it+=1
            it = 0
            if(swi2 == longcyc2):
                qu = random.randint(0,1)
                it = 0
                swi2 = 0
            swi2+=1
            Or = 0
            cyc+=1
            if(ite != 8):
                test
            if(ite == 8):
                binary += ","
                ite = 0
            if(sta == 0):
                sta = 1
        if(check[cyc] != str(qu)):
            if(swi == longcyc):
                qu = random.randint(0,1)
                swi = 0
            swi+=1
            Do = 1
            nul+=1
            Or = 0
            And = 0
            cyc+=1
            if(ite != 16):
                binary += "1"
                pri(binary)
                ite+=1
            if(ite == 16):
                binary += ","
                ite = 0
                pri(binary)
for a in range(500):
    b = random.randint(0,1)
    numa += str(b) + ","
for t in range(500):
    data = []
    for a in range(500):
        b = random.randint(0,20)
        data.append(b)
    OnMotion(data)
    send()
input("press any key")

