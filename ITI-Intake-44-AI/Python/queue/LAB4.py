
#lab4

from logging import exception


class queue:
    def __init__(self):
        self.x=[]



    def insert(self, value):
        self.x.insert(-len(self.x), value)

    def pop(self):
        if len(self.x)==0:
            print("invalid operation,empty Queue")
        else:
            v=self.x[len(self.x)-1]
            del self.x[len(self.x)-1]

            return v

    def is_empy(self):
        if len(self.x) == 0:
            return True
        else:
            return False



#LAB4 -2(inheritence)

class childqueue(queue):
    alldata=[]

    def __init__(self,name,size):
        self.x = []
        self.name=name
        self.size=size
        q={"name":self.name,"size":self.size,"content":[]}
        childqueue.alldata.append(q)



    def insert(self, value):
        if len(self.x)==self.size:
            raise Exception(" QueueOutOfRangeException")
        else:
            self.x.insert(-len(self.x), value)
            if len(self.x)==self.size:
                d={"name":self.name,"size":self.size,"content":self.x}
                allqueues=childqueue.alldata
                for queue in allqueues:
                    if queue["name"]==self.name:
                        deleted=childqueue.alldata.index(queue)
                        del childqueue.alldata[deleted]
                        allqueues.append(d)


    @classmethod
    def save(cls):
        try:
            fileobj = open("childqueues.txt", "w")
        except:
            print("error in file")
            return False
        else:
            for queue in childqueue.alldata:
                print(queue,file=fileobj)
            print("all queues are saved")
            return True

    @classmethod
    def load(cls):
        try:
            fileobj = open("childqueues.txt", "r")
        except:
            print("error in file")
            return False
        else:
            queues = fileobj.readlines()
            print("All Queues Data : ")
            for q in queues:
                print(q)
            return True



q=queue()
# q.insert(5)
# q.insert(7)
# q.insert(8)
# print(q.x)
# x=q.pop()
# print(x)
#
# q2=queue()
# z=q2.pop()
# print(q.is_empy())
# print(q2.is_empy())

childq=childqueue("qn1",3)
childq.insert(7)
childq.insert(8)
childq.insert(9)


# print(childq.x)
ch2=childqueue("qn2",5)

ch3=childqueue("qn3",4)
ch3.insert(10)

ch3.insert(11)
ch3.insert(12)
ch3.insert(13)

childqueue.save()
childqueue.load()
