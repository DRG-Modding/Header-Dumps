#ifndef UE4SS_SDK_ScreenOverlay_Afflictions_HPP
#define UE4SS_SDK_ScreenOverlay_Afflictions_HPP

class UScreenOverlay_Afflictions_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCanvasPanel* RootCanvas;
    APlayerCharacter* Player;
    UHealthComponent* HealthComponent;
    TMap<UPlayerAfflictionOverlay*, UPlayerAfflictionOverlayWidget*> ActiveOverlays;

    void FindOverlayWidget(UPlayerAfflictionOverlay* OverlayData, bool CreateIfNew, UPlayerAfflictionOverlayWidget*& OutWidget, UCanvasPanelSlot* CanvasWidget, UPlayerAfflictionOverlayWidget* Widget, FAnchors K2Node_MakeStruct_Anchors, bool Temp_bool_Variable, TSubclassOf<UUserWidget> Temp_class_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<UUserWidget> K2Node_Select_Default, UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerAfflictionOverlayWidget* K2Node_DynamicCast_AsPlayer_Affliction_Overlay_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UPlayerAfflictionOverlayWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void Construct();
    void OnShowOverlay_Event(UPlayerAfflictionOverlay* Overlay);
    void OnHideOverlay_Event(UPlayerAfflictionOverlay* Overlay);
    void ExecuteUbergraph_ScreenOverlay_Afflictions(int32 EntryPoint, OverlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerAfflictionOverlay* K2Node_CustomEvent_Overlay_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerAfflictionOverlayWidget* CallFunc_FindOverlayWidget_OutWidget, UPlayerAfflictionOverlay* K2Node_CustomEvent_Overlay, UPlayerAfflictionOverlayWidget* CallFunc_FindOverlayWidget_OutWidget_1, OverlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
}

#endif
