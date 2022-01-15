#ifndef UE4SS_SDK_HUD_RefineryUsebutton_HPP
#define UE4SS_SDK_HUD_RefineryUsebutton_HPP

class UHUD_RefineryUseButton_C : UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimDownArrow;
    UUI_ImageTinted_C* IMG_DownArrow;
    UImage* Img_Icon;
    AFSDRefinery* Refinery;

    void UpdateState(UTexture2D* Texture, bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, ERefineryState Temp_byte_Variable, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, UTexture2D* Temp_object_Variable_5, UTexture2D* Temp_object_Variable_6, UTexture2D* Temp_object_Variable_7, bool CallFunc_IsValid_ReturnValue, UTexture2D* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, UTexture2D* K2Node_Select_Default_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Construct();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void PreConstruct(bool IsDesignTime);
    void SetRefinery(UFSDRefinery* InRefinery);
    void OnCanStartRefineryChanged(bool CanUse);
    void ExecuteUbergraph_HUD_RefineryUseButton(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UsableChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ERefineryState K2Node_CustomEvent_InRefineryState, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDRefinery* K2Node_CustomEvent_InRefinery, bool K2Node_CustomEvent_canUse);
}

#endif
