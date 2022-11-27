# def start(inp):
#     if(inp.isalpha()):
#         dfa = "B"
#     else:
#         dfa = "dead"
#     return dfa

# def B(inp):
#     if(inp == '.'):
#         dfa = "C"
#     elif(inp.isalnum()):
#         dfa = "B"
#     elif(inp == '.'):
#         dfa = "C"
#     elif(inp == "@"):
#         dfa = "D"
#     else:
#         dfa = "dead"
#     return dfa
	
# def C(inp):
#     if(inp.isalphanum()):
#         dfa = "B"
#     else:
#         dfa = "dead"
#     return dfa

# def D(inp):
#     if(inp.isalpha()):
#         dfa = "E"
#     else:
#         dfa = "dead"
#     return dfa

# def E(inp):
#     if(inp.isalpha()):
#         dfa = "E"
#     elif(inp == '.'):
#         dfa = "F"
#     else:
#         dfa = "dead"
#     return dfa

# def F(inp):
#     if(inp.isalpha()):
#         dfa = "G"
#     else:
#         dfa = "dead"
#     return dfa

# def G(inp):
#     if(inp.isalpha()):
#         dfa = "G"
#     elif(inp == '.'):
#         dfa = "F"
#     else:
#         dfa = "dead"
#     return dfa	

# def isEmail(address):       
#     l = len(address)  
#     dfa = 'start'
#     for i in range(l):   
#         if (dfa == 'start'):   
#             dfa = start(address[i])   
        
#         elif (dfa == 'B'):   
#             dfa = B(address[i])   
        
#         elif (dfa == 'C') :  
#             dfa = C(address[i])   
        
#         elif (dfa == 'D') :  
#             dfa = D(address[i])   
        
#         elif (dfa == 'E') :  
#             dfa = E(address[i])

#         elif (dfa == 'F') :  
#             dfa = F(address[i])

#         elif (dfa == 'G') :  
#             dfa = G(address[i])  
#         else:  
#             return 0
#     if(dfa == 'G') :  
#         return 1
#     else:  
#         return 0

def begin(web):
    if "://" in web:
        first = web.split("://")[0]
        if(first == "http" or "https"):
            dfa = 1
    elif(web[0] == "w" and web[1] == "w" and web[2] == "w"):
        dfa = 2
    else:
        dfa = -1
    return dfa

def s1(web):
    if(web[0] == "w" and web[1] == "w" and web[2] == "w"):
        dfa = 2
    else:
        dfa = -1
    return dfa
def s2(web):
    

# userInput = int(input())
# arr = []
# email = 0
# web = 0
# for i in range(userInput):
#     arr.append(input())
# for i in range(userInput):
#     if(isEmail(arr[i])):
#         email = i+1