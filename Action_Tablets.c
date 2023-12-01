//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action_Tablets()
{
	lr_start_transaction("trx_Tablets");
	truclient_step("1", "Click on TABLETS Shop Now", "snapshot=Action_Tablets_1.inf");
	truclient_step("2", "Click on image (5) image", "snapshot=Action_Tablets_2.inf");
	truclient_step("3", "Click on image (6) image", "snapshot=Action_Tablets_3.inf");
	truclient_step("4", "Click on image (7) image", "snapshot=Action_Tablets_4.inf");
	truclient_step("5", "Click on image (8) image", "snapshot=Action_Tablets_5.inf");
	truclient_step("6", "Click on ADD TO CART button", "snapshot=Action_Tablets_6.inf");
	truclient_step("7", "Click on TABLETS link", "snapshot=Action_Tablets_7.inf");
	truclient_step("8", "Click on DISPLAY heading", "snapshot=Action_Tablets_8.inf");
	truclient_step("9", "Click on 10.1' diagonal WXGA UWVA... checkbox", "snapshot=Action_Tablets_9.inf");
	truclient_step("10", "Click on image (5) image", "snapshot=Action_Tablets_10.inf");
	truclient_step("11", "Click on TABLETS link", "snapshot=Action_Tablets_11.inf");
	truclient_step("12", "Click on BUY NOW button", "snapshot=Action_Tablets_12.inf");
	truclient_step("13", "Double click on Plus", "snapshot=Action_Tablets_13.inf");
	truclient_step("14", "Click on ADD TO CART button", "snapshot=Action_Tablets_14.inf");
	truclient_step("15", "Click on TABLETS link", "snapshot=Action_Tablets_15.inf");
	truclient_step("16", "Click on dvantage link", "snapshot=Action_Tablets_16.inf");
	lr_end_transaction("trx_Tablets",0);

	return 0;
}
