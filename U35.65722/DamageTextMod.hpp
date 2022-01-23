#ifndef UE4SS_SDK_DamageTextMod_HPP
#define UE4SS_SDK_DamageTextMod_HPP

class ADamageTextMod_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TMap<APawn*, float> HealthMap;
    float VerticalBuffer;
    float HorizontalBuffer;

    void Get Config(class UWidget*& Mod UI, bool& Can Be Toggled Off, FString& Mod Name, FString& Mod Author, FString& Mod Version);
    void GetPlayerController(class APlayerController*& PlayerController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
    void IsPawnOnScreen(class APawn* Pawn, bool& PawnOnScreen, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_PlayerController, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_ProjectWorldLocationToScreen_ScreenLocation, bool CallFunc_ProjectWorldLocationToScreen_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
    void HealthMapEntryToString(class APawn* Pawn, FString& HealthMapEntryString, FString CallFunc_GetObjectName_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_FloatToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3);
    void UpdateHealthMap(class APawn* Pawn, float newHealth, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
    void Get Damage Taken(class APawn* Pawn, float newHealth, float& DamageTaken, float NewLocalVar_0, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
    void RegisterPawnIfNew(class APawn* Pawn, float newHealth, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
    void Get Current Health from Pawn(class APawn* Pawn, float& newHealth, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetHealth_ReturnValue);
    void Spawn Damage Text(class APawn* Pawn, float Damage, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_Conv_VectorToTransform_ReturnValue, class UWidgetComponent* CallFunc_AddComponent_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UDamageTextWidget_C* K2Node_DynamicCast_AsDamage_Text_Widget, bool K2Node_DynamicCast_bSuccess);
    void Handle Disable Event();
    void Handle Enable Event();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DamageTextMod(int32 EntryPoint, float K2Node_Event_DeltaSeconds, TArray<class APawn*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_Array_Get_Item, bool CallFunc_IsPawnOnScreen_PawnOnScreen, float CallFunc_Get_Current_Health_from_Pawn_NewHealth, float CallFunc_Get_Damage_Taken_DamageTaken, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
