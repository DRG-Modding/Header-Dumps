#ifndef UE4SS_SDK_ITM_Community_Console_ClaimReward_HPP
#define UE4SS_SDK_ITM_Community_Console_ClaimReward_HPP

class UITM_Community_Console_ClaimReward_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* LogoAnimation;
    class UImage* Image_Faction;
    class USizeBox* SydicateLogoBox;
    class UUI_ImageTinted_C* SyndicateLogo;
    class UBorder* TextBackground;
    class UBorder* TextBorder;
    class UUI_ImageTinted_C* UI_ImageTinted_C_0;
    class UUI_ImageTinted_C* UI_ImageTinted_C_2;
    class UUI_ImageTinted_C* UI_ImageTinted_C_3;
    class UUI_ImageTinted_C* UI_ImageTinted_C_4;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    FSlateBrush IconBrush;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Community_Console_ClaimReward(int32 EntryPoint);
};

#endif
