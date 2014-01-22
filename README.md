CPP_Tax_Calculator_for_You
==========================

Tax Calculator
________________________________________________________


Functionality Requirments:
***************************
F.1.) Need to Give Salary breakup in a Monthly or Yearly fashion from the User.This can be in a
File which will be in a xml format or a command Line Input .

<salary breakup>
  <HRA>xxxxxx</HRA>
  <Basic>xxxxxx</Basic>
  <Bonus>xxxxxxx</Bonus>
  <PF> xxxxx </PF>
  .....
  TBD

<Investmensts>
  <Tax Savers>
    <Life Insurance>
    <.....>
  <Non tax Savers>
    <1year plans>
    <Savings>



F.2.) The Output should be a Detailed Text File having the Following Sections

Details of Tax and Investments

1. Total Earnings (Before PF or Tax deductions Section A) 
2. Total Income Taxable:
3. Total tax Paid Annually and Monthly :
4. Savings:
5. Returns:




Design Requirments:
***************************
As this is a C++ Project the DP Use is made for C++ DP Styles 

D.1. The architecture will be divided into three modules 
  
  D.1.1. File RD/WR 
                          [file handler]
          
  D.1.2. Xml Parsing module 
                          [Xml parser]
                  Parse for the fields and set the inputs for the Tax calculation Module 
                  by creating an Instance.

  D.1.3. Tax Calculation Module
              Use the calculation Algo belo
              
              
  main Module ()


D.2. 





Calculation algorithm
=============================
Rs. 5,00,001 to Rs. 10,00,000 -->	20 per cent.
Above Rs. 10,00,000 -->	30 per cent. 

Now the basic income Is 100% taxable so clalculate and Every Comapny has different Basic + FBA(Flexible Benifit amount)
as you the slabs you will fell the deduction Percentage will be 20% .
 
 
 
 Gross CTC = Total  Income Annauly 
 20% of Gross CTC = Taxable Income Annualy 
 
 
  


FBA Calculation:
===========================
HRA (Least of these)
-------------------------------
1.1. HRA provided by Company per month (for the working Duration of the year)
1.2. 40% of the salary gross total
1.3. 10% of (Gross total Rent)
------------------------------------
Total HRA



Savings 80C and 80 CCF
------------------------------
Total 80CCC and 80 CCF(max 100000) =   (PF duration for the whole yr) + NSC () + LICI premeium(80CCC ) + Employer Pension(80CCD Max of 10% of CTC) 

Total 80D and 80DD (max of 15000) = Any medicle insurence premium 


Total 80E = Loan related deductions

Total 80G = any charitable Paymenst 



Total Savings = Total 80CCC and 80 CCF + Total 80D and 80DD + Total 80E + Total 80G



LTA
-----------------------------
LTA Provided by the company 

Conveneyance
------------------------------


Total Tax Declaration Savings is Done at January = Total HRA + LTA + Conveneyance + Medicle Bills


2) Tax already paid 
================================
Total Tax paid = Income Tax per month + PT  x 12 


ie Total Tax deducted = Total taxable Income - (LTA + PF)

Actual taxable income  = Total taxable Income - (LTA + PF + Savings)


3) Tax returns:
=================================


returns = Actual taxable income - Total Tax deducted





