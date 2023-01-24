#ifndef UE4SS_SDK_BP_Donkey_Facility_HPP
#define UE4SS_SDK_BP_Donkey_Facility_HPP

class ABP_Donkey_Facility_C : public ABP_Donkey_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* DataRack;

    void ReceiveBeginPlay();
    void OnResourceIncreased(class UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_BP_Donkey_Facility(int32 EntryPoint);
};

#endif
