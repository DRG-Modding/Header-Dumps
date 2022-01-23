#ifndef UE4SS_SDK_HUD_Radar_HPP
#define UE4SS_SDK_HUD_Radar_HPP

class UHUD_Radar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* RadarCanvas;
    TArray<TScriptInterface<IRadarPointInterface_C>> Points;
    FVector playerPos;
    FVector playerForward;
    FVector2D PointScale;
    TArray<TScriptInterface<IRadarPointInterface_C>> ToBeDeleted;

    void AddPointWidget(class UUserWidget* NewWdiget, class URadarPointComponent* RadarComponent, TScriptInterface<class IRadarPointInterface_C> K2Node_DynamicCast_AsRadar_Point_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InitPoint_success, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void AddPoint(class URadarPointComponent* Point, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HUD_Radar(int32 EntryPoint, class UHUD_Radar_WorldCorners_C* CallFunc_Create_ReturnValue, class UHUD_Radar_WorldCorners_C* CallFunc_Create_ReturnValue_1, class UHUD_Radar_WorldCorners_C* CallFunc_Create_ReturnValue_2, class UHUD_Radar_WorldCorners_C* CallFunc_Create_ReturnValue_3, class UHUD_Radar_AngleMarker_C* CallFunc_Create_ReturnValue_4, const FVector Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_DegCos_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, float CallFunc_DegSin_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const FVector Temp_struct_Variable_1, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const FVector Temp_struct_Variable_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, TScriptInterface<class IRadarPointInterface_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_Get3dPosition_pos, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_MapToRadarPosition_radarPos, float CallFunc_MapToRadarPosition_alpha, bool CallFunc_UpdatePoint_destroy, FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, TScriptInterface<class IRadarPointInterface_C> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, const FVector Temp_struct_Variable_3);
};

#endif
