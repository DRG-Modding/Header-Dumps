#ifndef UE4SS_SDK_HealthAndShieldNumbers_Mod_HPP
#define UE4SS_SDK_HealthAndShieldNumbers_Mod_HPP

class AHealthAndShieldNumbers_Mod_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UHealthAndShieldNumbers_Widget_C* HealthAndShieldNumbers_WidgetReference;
    bool IsInitialized;
    class UPlayerHealthComponent* PlayerHealthComponent;
    class AFSDHUD* FSDHUD;

    void GetLocalPlayerCharacter(class APlayerCharacter*& PlayerCharacter, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
    void GetLocalPlayerController(class APlayerController*& PlayerController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_HealthAndShieldNumbers_Mod(int32 EntryPoint, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_PlayerCharacter, class APlayerController* CallFunc_GetLocalPlayerController_PlayerController, class UHealthAndShieldNumbers_Widget_C* CallFunc_Create_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetArmor_ReturnValue);
};

#endif
