#ifndef UE4SS_SDK_BP_Donkey_Facility_HPP
#define UE4SS_SDK_BP_Donkey_Facility_HPP

class ABP_Donkey_Facility_C : public ABP_Donkey_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* DataRack;

    void ReceiveBeginPlay();
    void OnResourceIncreased(class UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_BP_Donkey_Facility(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FExecuteUbergraph_BP_Donkey_FacilityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
