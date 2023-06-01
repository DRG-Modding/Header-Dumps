#ifndef UE4SS_SDK_MENU_Credits_HPP
#define UE4SS_SDK_MENU_Credits_HPP

class UMENU_Credits_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    class UBasic_ButtonScalable2_C* Basic_ButtonScalableMoreCredits;
    class UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    class UBlurBackground_C* BlurBackground;
    class UBorder* Border_0;
    class UBorder* Border_1;
    class UImage* FilmSpilOrdningen_Image;
    class UImage* Image_1;
    class UImage* IMG_CrewPhoto;
    class UITM_CreditsEntry_C* ITM_CreditsEntry;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_0;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_1;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_3;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_4;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_5;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_1;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_2;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_3;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_4;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_5;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_6;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_7;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_8;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_9;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_10;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_11;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_12;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_13;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_14;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_15;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_16;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_17;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_18;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_19;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_20;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_21;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_22;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_23;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_24;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_25;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_26;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_27;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_28;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_29;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_30;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_31;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_32;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_33;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_34;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_35;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_36;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_37;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_38;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_39;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_40;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_41;
    class UITM_CreditsEntry_C* ITM_CreditsEntry_C_42;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UImage* LogoBig;
    class UWidgetSwitcher* MoreCreditsSwitch;
    int32 CreditsPage;
    TArray<FText> texts;

    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalableMoreCredits_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature();
    void Construct();
    void ReceiveCloseCommand();
    void ExecuteUbergraph_MENU_Credits(int32 EntryPoint);
};

#endif
