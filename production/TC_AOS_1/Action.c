//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Navigate");
	truclient_step("1", "Navigate to 'http://advantageonlineshopping.com/#/'", "snapshot=Action_1.inf");
	truclient_step("2", "Verify TABLETS 's 'Visible Text' Contain TABLETS", "snapshot=Action_2.inf");
	lr_end_transaction("Navigate",0);
	lr_start_transaction("Login");
	truclient_step("3", "Click on element (1)", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Username label", "snapshot=Action_4.inf");
	truclient_step("5", "Type admin in Username textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type ***** in Password passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on SIGN IN button", "snapshot=Action_7.inf");
	lr_end_transaction("Login",0);
	lr_start_transaction("Speakers");
	truclient_step("8", "Click on SPEAKERS Shop Now link", "snapshot=Action_8.inf");
	truclient_step("9", "Wait for image (3) image", "snapshot=Action_9.inf");
	truclient_step("10", "Click on image (1) image", "snapshot=Action_10.inf");
	truclient_step("11", "Click on ADD TO CART button", "snapshot=Action_11.inf");
	lr_end_transaction("Speakers",0);
	lr_start_transaction("Tablet");
	truclient_step("12", "Click on dvantage link", "snapshot=Action_12.inf");
	truclient_step("13", "Click on TABLETS Shop Now link", "snapshot=Action_13.inf");
	truclient_step("14", "Click on image (2) image", "snapshot=Action_14.inf");
	truclient_step("15", "Click on ADD TO CART button", "snapshot=Action_15.inf");
	lr_end_transaction("Tablet",0);
	lr_start_transaction("Checkout");
	truclient_step("16", "Click on dvantage link", "snapshot=Action_16.inf");
	truclient_step("18", "Click on element (3)", "snapshot=Action_18.inf");
	truclient_step("19", "Wait for / CHECKOUT ($3,566.98) button", "snapshot=Action_19.inf");
	truclient_step("20", "Click on / CHECKOUT ($1,728.97) button", "snapshot=Action_20.inf");
	truclient_step("21", "Wait for SHIPPING BY label", "snapshot=Action_21.inf");
	truclient_step("22", "Click on NEXT button", "snapshot=Action_22.inf");
	truclient_step("23", "Type gugug in *SafePay username textbox", "snapshot=Action_23.inf");
	truclient_step("24", "Type ****** in *SafePay password passwordbox", "snapshot=Action_24.inf");
	truclient_step("25", "Click on Save changes in profile... checkbox", "snapshot=Action_25.inf");
	truclient_step("26", "Click on PAY NOW button", "snapshot=Action_26.inf");
	lr_end_transaction("Checkout",0);
	truclient_step("27", "Click on dvantage link", "snapshot=Action_27.inf");
	truclient_step("28", "Click on element (3)", "snapshot=Action_28.inf");
	lr_start_transaction("SignOut");
	truclient_step("30", "Click on Sign out link", "snapshot=Action_30.inf");
	lr_end_transaction("SignOut",0);

	return 0;
}
