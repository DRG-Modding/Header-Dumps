#ifndef UE4SS_SDK_BP_Donkey_Facility_HPP
#define UE4SS_SDK_BP_Donkey_Facility_HPP

class ABP_Donkey_Facility_C : UBP_Donkey_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNiagaraComponent* Niagara;
    UStaticMeshComponent* DataRack;

    void ReceiveBeginPlay();
    void OnResourceIncreased(UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_BP_Donkey_Facility(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, ResourceAddedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
