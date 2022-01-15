#ifndef UE4SS_SDK_HUD_FixDispenser_HPP
#define UE4SS_SDK_HUD_FixDispenser_HPP

class UHUD_FixDispenser_C : UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimDownArrow;
    UUI_ImageTinted_C* IMG_DownArrow;
    UImage* Img_Icon;
    AFSDRefinery* Refinery;
    UUsableComponentBase* Usable;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_FixDispenser(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
