#ifndef UE4SS_SDK_ScreenOverlay_Afflictions_HPP
#define UE4SS_SDK_ScreenOverlay_Afflictions_HPP

class UScreenOverlay_Afflictions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* RootCanvas;
    class APlayerCharacter* Player;
    class UHealthComponent* HealthComponent;
    TMap<class UPlayerAfflictionOverlay*, class UPlayerAfflictionOverlayWidget*> ActiveOverlays;

    void FindOverlayWidget(class UPlayerAfflictionOverlay* OverlayData, bool CreateIfNew, class UPlayerAfflictionOverlayWidget*& OutWidget, class UCanvasPanelSlot* CanvasWidget, class UPlayerAfflictionOverlayWidget* Widget, FAnchors K2Node_MakeStruct_Anchors, bool Temp_bool_Variable, TSubclassOf<class UUserWidget> Temp_class_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UUserWidget> K2Node_Select_Default, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerAfflictionOverlayWidget* K2Node_DynamicCast_AsPlayer_Affliction_Overlay_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPlayerAfflictionOverlayWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void Construct();
    void OnShowOverlay_Event(class UPlayerAfflictionOverlay* Overlay);
    void OnHideOverlay_Event(class UPlayerAfflictionOverlay* Overlay);
    void ExecuteUbergraph_ScreenOverlay_Afflictions(int32 EntryPoint, FExecuteUbergraph_ScreenOverlay_AfflictionsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UPlayerAfflictionOverlay* K2Node_CustomEvent_Overlay_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UPlayerAfflictionOverlayWidget* CallFunc_FindOverlayWidget_OutWidget, class UPlayerAfflictionOverlay* K2Node_CustomEvent_Overlay, class UPlayerAfflictionOverlayWidget* CallFunc_FindOverlayWidget_OutWidget_1, FExecuteUbergraph_ScreenOverlay_AfflictionsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
};

#endif
