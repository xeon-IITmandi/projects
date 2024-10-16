class Item:
    pay_rate=0.8 #the pay rate after 20% discount
    def __init__(self,name:str,price:float,quantity):
        assert price>=0,f"Price {price} is not greater than or equal to zero!"
        assert quantity>=0,f"Quantity {quantity} is not greater than or equal to zero!"
        
        # print(f"constructor is called by {name}."),
        
        self.name=name
        self.price=price
        self.quantity=quantity

    def total_price(self):
       print(f"total price of {self.name} =",self.price*self.quantity) 

    def apply_discount(self):
         self.price=self.price*self.pay_rate
         return self.price

    
    

item1=Item("apple",100,5)
item2=Item("samsung",1000,10)
item2.pay_rate=0.7
# item1.total_price()
# item2.total_price()


# print(Item.__dict__)#gives all attributes for class level

# print(item1.__dict__)#gives all attributes for instance level

# print(item2.__dict__)#gives all attributes for instance level


print(item1.apply_discount())
print(item2.apply_discount())

