#ifndef UE4SS_SDK_BP_ChangeCharacterConsole_HPP
#define UE4SS_SDK_BP_ChangeCharacterConsole_HPP

class ABP_ChangeCharacterConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Greepling_005;
    class UStaticMeshComponent* SM_Greepling_006;
    class UStaticMeshComponent* SM_Greepling_008;
    class UStaticMeshComponent* SM_Greepling_007;
    class UStaticMeshComponent* SM_Greepling_003;
    class UStaticMeshComponent* SM_Greepling_004;
    class UWidgetComponent* Widget;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer, bool FoundController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABP_PlayerController_SpaceRig_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnLastWindowClosed_Event_0();
    void ExecuteUbergraph_BP_ChangeCharacterConsole(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_BP_ChangeCharacterConsoleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsNewPlayer_IsNewPlayer, bool CallFunc_HasAuthority_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue);
};

#endif
