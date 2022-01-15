#ifndef UE4SS_SDK_MENU_Credits_HPP
#define UE4SS_SDK_MENU_Credits_HPP

class UMENU_Credits_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    UBasic_ButtonScalable2_C* Basic_ButtonScalableMoreCredits;
    UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    UBlurBackground_C* BlurBackground;
    UBorder* Border_0;
    UBorder* Border_1;
    UImage* FilmSpilOrdningen_Image;
    UImage* Image_1;
    UImage* IMG_CrewPhoto;
    UITM_CreditsEntry_C* ITM_CreditsEntry;
    UITM_CreditsEntry_C* ITM_CreditsEntry_0;
    UITM_CreditsEntry_C* ITM_CreditsEntry_1;
    UITM_CreditsEntry_C* ITM_CreditsEntry_3;
    UITM_CreditsEntry_C* ITM_CreditsEntry_4;
    UITM_CreditsEntry_C* ITM_CreditsEntry_5;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_1;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_2;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_3;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_4;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_5;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_6;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_7;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_8;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_9;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_10;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_11;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_12;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_13;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_14;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_15;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_16;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_17;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_18;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_19;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_20;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_22;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_23;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_24;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_25;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_27;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_28;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_29;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_30;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_31;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_32;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_33;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_34;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_35;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_36;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_37;
    UITM_CreditsEntry_C* ITM_CreditsEntry_C_38;
    UITM_MenuBackground_C* ITM_MenuBackground;
    UImage* LogoBig;
    UWidgetSwitcher* MoreCreditsSwitch;
    int32 CreditsPage;
    TArray<FText> texts;

    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalableMoreCredits_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature();
    void Construct();
    void ReceiveCloseCommand();
    void ExecuteUbergraph_MENU_Credits(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, const FText Temp_text_Variable, const FText Temp_text_Variable_1, int32 CallFunc_Array_Length_ReturnValue, const FText Temp_text_Variable_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FText CallFunc_Array_Get_Item);
}

#endif
