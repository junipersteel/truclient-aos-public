//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action_ContactUs()
{
	lr_start_transaction("trx_ContactUs");
	truclient_step("1", "Click on CONTACT US JavaScript link", "snapshot=Action_ContactUs_1.inf");
	truclient_step("2", "Select Laptops from CategorySelect CategoryLa... listbox", "snapshot=Action_ContactUs_2.inf");
	truclient_step("3", "Select HP Pavilion 15z Laptop from ProductSelect ProductHP... listbox", "snapshot=Action_ContactUs_3.inf");
	truclient_step("4", "Click on *EmailEmail textbox", "snapshot=Action_ContactUs_4.inf");
	truclient_step("5", "Type eMailParam in *EmailEmail textbox", "snapshot=Action_ContactUs_5.inf");
	truclient_step("6", "Click on subjectTextarea textbox", "snapshot=Action_ContactUs_6.inf");
	truclient_step("7", "Type Does it run Mint Linux in subjectTextarea textbox", "snapshot=Action_ContactUs_7.inf");
	truclient_step("8", "Click on subjectTextarea textbox", "snapshot=Action_ContactUs_8.inf");
	truclient_step("9", "Type ? in subjectTextarea textbox", "snapshot=Action_ContactUs_9.inf");
	truclient_step("10", "Click on SEND button", "snapshot=Action_ContactUs_10.inf");
	truclient_step("11", "Click on CONTINUE SHOPPING link", "snapshot=Action_ContactUs_11.inf");
	truclient_step("12", "Click on dvantage link", "snapshot=Action_ContactUs_12.inf");
	lr_end_transaction("trx_ContactUs",0);

	return 0;
}
