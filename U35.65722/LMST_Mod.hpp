#ifndef UE4SS_SDK_LMST_Mod_HPP
#define UE4SS_SDK_LMST_Mod_HPP

class ALMST_Mod_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    int32 TotalKills;
    class ULMST_Widget_C* LMST_WidgetReference;
    class UPlayerStatsComponent* PlayerStatsComponent;
    int32 TotalRevived;
    int32 TotalDeaths;
    float TotalMined;
    bool IsInitialized;

    void Get Config(class UWidget*& Mod UI, bool& Can Be Toggled Off, FString& Mod Name, FString& Mod Author, FString& Mod Version);
    void GetLocalPlayerController(class APlayerController*& PlayerController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
    void GetLocalPlayerCharacter(class APlayerCharacter*& PlayerCharacter, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
    void ReceiveTick(float DeltaSeconds);
    void Handle Enable Event();
    void Handle Disable Event();
    void ExecuteUbergraph_LMST_Mod(int32 EntryPoint, class APlayerController* CallFunc_GetLocalPlayerController_PlayerController, class ULMST_Widget_C* CallFunc_Create_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_PlayerCharacter, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
