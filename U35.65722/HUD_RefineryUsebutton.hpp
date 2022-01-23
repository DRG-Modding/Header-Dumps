#ifndef UE4SS_SDK_HUD_RefineryUsebutton_HPP
#define UE4SS_SDK_HUD_RefineryUsebutton_HPP

class UHUD_RefineryUseButton_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimDownArrow;
    class UUI_ImageTinted_C* IMG_DownArrow;
    class UImage* Img_Icon;
    class AFSDRefinery* Refinery;

    void UpdateState(class UTexture2D* Texture, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, ERefineryState Temp_byte_Variable, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* K2Node_Select_Default_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Construct();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void PreConstruct(bool IsDesignTime);
    void SetRefinery(class AFSDRefinery* InRefinery);
    void OnCanStartRefineryChanged(bool CanUse);
    void ExecuteUbergraph_HUD_RefineryUseButton(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_HUD_RefineryUseButtonK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_RefineryUseButtonK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, ERefineryState K2Node_CustomEvent_InRefineryState, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AFSDRefinery* K2Node_CustomEvent_InRefinery, bool K2Node_CustomEvent_canUse);
};

#endif
