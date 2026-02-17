 select p.product_name , year , price 
 from Sales  s
 Join  Product p
 On  s.product_id = p.product_id

