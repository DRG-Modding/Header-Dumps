#ifndef UE4SS_SDK_CSC_IceCaveLogic_HPP
#define UE4SS_SDK_CSC_IceCaveLogic_HPP

class UCSC_IceCaveLogic_C : UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void spawnParticles(UPlayerCharacter* Character, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
    void ReceiveBeginPlay();
    void OnPlayerCharacterRegistered(UPlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_CSC_IceCaveLogic(int32 EntryPoint, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, PlayerCharacterDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
