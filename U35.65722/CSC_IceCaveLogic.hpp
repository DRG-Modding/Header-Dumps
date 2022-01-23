#ifndef UE4SS_SDK_CSC_IceCaveLogic_HPP
#define UE4SS_SDK_CSC_IceCaveLogic_HPP

class UCSC_IceCaveLogic_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void spawnParticles(class APlayerCharacter* Character, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
    void ReceiveBeginPlay();
    void OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_CSC_IceCaveLogic(int32 EntryPoint, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, FExecuteUbergraph_CSC_IceCaveLogicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
