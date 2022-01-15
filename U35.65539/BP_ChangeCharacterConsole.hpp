#ifndef UE4SS_SDK_BP_ChangeCharacterConsole_HPP
#define UE4SS_SDK_BP_ChangeCharacterConsole_HPP

class ABP_ChangeCharacterConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Greepling_005;
    UStaticMeshComponent* SM_Greepling_006;
    UStaticMeshComponent* SM_Greepling_008;
    UStaticMeshComponent* SM_Greepling_007;
    UStaticMeshComponent* SM_Greepling_003;
    UStaticMeshComponent* SM_Greepling_004;
    UWidgetComponent* Widget;
    UTextRenderComponent* TextRender;
    UBoxComponent* Box;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;
    TArray<ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(UBP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer, bool FoundController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UBP_PlayerController_SpaceRig_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void OnLastWindowClosed_Event_0();
    void ExecuteUbergraph_BP_ChangeCharacterConsole(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, WindowManagerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsNewPlayer_IsNewPlayer, bool CallFunc_HasAuthority_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue);
}

#endif
