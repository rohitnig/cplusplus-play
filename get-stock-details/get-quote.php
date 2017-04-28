<?php

  //Obtain Quote Info - This collects the Microsoft Stock Info
  $quote = file_get_contents('http://finance.google.co.uk/finance/info?client=ig&q=NASDAQ:MSFT');
  
  //Remove CR's from ouput - make it one line
  $json = str_replace("\n", "", $quote);
  
  //Remove //, [ and ] to build qualified string  
  $data = substr($json, 4, strlen($json) -5);
    
  //decode JSON data
  $json_output = json_decode($data, true);
  
  //Un-remark print_r to see all array keys
  //print_r($json_output);
  
  //Output Stock price array key.
  echo "\n".$json_output['l']; 

?>
