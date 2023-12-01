//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action_Speakers()
{
	lr_start_transaction("trx_Speakers");
	truclient_step("1", "Click on SPEAKERS Shop Now", "snapshot=Action_Speakers_1.inf");
	truclient_step("2", "Click on image (1) image", "snapshot=Action_Speakers_2.inf");
	truclient_step("3", "Click on SPEAKERS link", "snapshot=Action_Speakers_3.inf");
	truclient_step("4", "Click on image (2) image", "snapshot=Action_Speakers_4.inf");
	truclient_step("5", "Click on SPEAKERS link", "snapshot=Action_Speakers_5.inf");
	truclient_step("6", "Click on image (3) image", "snapshot=Action_Speakers_6.inf");
	truclient_step("7", "Click on SPEAKERS link", "snapshot=Action_Speakers_7.inf");
	truclient_step("8", "Click on image (4) image", "snapshot=Action_Speakers_8.inf");
	truclient_step("9", "Click on SPEAKERS link", "snapshot=Action_Speakers_9.inf");
	truclient_step("10", "Click on BUY NOW button", "snapshot=Action_Speakers_10.inf");
	truclient_step("11", "Click on Plus", "snapshot=Action_Speakers_11.inf");
	truclient_step("12", "Click on ADD TO CART button", "snapshot=Action_Speakers_12.inf");
	truclient_step("14", "Click on SPEAKERS link", "snapshot=Action_Speakers_14.inf");
	truclient_step("15", "Click on dvantage link", "snapshot=Action_Speakers_15.inf");
	lr_end_transaction("trx_Speakers",0);

	return 0;
}
