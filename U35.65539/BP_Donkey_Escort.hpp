#ifndef UE4SS_SDK_BP_Donkey_Escort_HPP
#define UE4SS_SDK_BP_Donkey_Escort_HPP

class ABP_Donkey_Escort_C : UBP_Donkey_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_OmoranHeartStoneMagic_01;
    UStaticMeshComponent* SM_OmoranStrap_01;
    UStaticMeshComponent* HearthStone;

    void ReceiveBeginPlay();
    void OnResourceIncreased(UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_BP_Donkey_Escort(int32 EntryPoint, ResourceAddedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, UDialogDataAsset* Temp_object_Variable, UDialogDataAsset* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UCappedResource* K2Node_CustomEvent_Resource, float K2Node_CustomEvent_Amount, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, UDialogDataAsset* K2Node_Select_Default);
}

#endif
