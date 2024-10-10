print('Your Salary Calculator')
basic=int(input('Enter your basic salary : '))
print("Your HRA is 10 percent, TA is 5 percent and Proftax is 2 percent")
HRA=basic*0.10
TA=basic*0.05
print('Housing and Rental allowances :',HRA,' rupees')
print('Travel allowances ',TA,' rupees')
totalsal=basic+HRA+TA
ptax=totalsal*0.02
totalsal=totalsal-ptax
print('Proffesional tax :',ptax,' rupees')
print('Your in hand salary after all deductions and allowances is :',totalsal,' rupees.')