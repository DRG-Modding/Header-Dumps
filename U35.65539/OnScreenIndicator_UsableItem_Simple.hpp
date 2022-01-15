#ifndef UE4SS_SDK_OnScreenIndicator_UsableItem_Simple_HPP
#define UE4SS_SDK_OnScreenIndicator_UsableItem_Simple_HPP

class UOnScreenIndicator_UsableItem_Simple_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall;
    UUI_AdvancedLabel_C* KeyLabel;
    UProgressBar* ProgressBar_1;
    APlayerCharacter* Character;
    AItem* Item;
    UUsableAggregator* Aggregator;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnItemEquipped(AItem* Item);
    void OnVisibilityChanged(bool IsVisible);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int32 EntryPoint, UUsableAggregator* CallFunc_GetComponentByClass_ReturnValue, AggregatorVisibilityChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, AItem* K2Node_CustomEvent_Item, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_isVisible, ESlateVisibility K2Node_Select_Default, float CallFunc_GetProgress_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
