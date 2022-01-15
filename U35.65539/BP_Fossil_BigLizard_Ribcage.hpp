#ifndef UE4SS_SDK_BP_Fossil_BigLizard_Ribcage_HPP
#define UE4SS_SDK_BP_Fossil_BigLizard_Ribcage_HPP

class ABP_Fossil_BigLizard_Ribcage_C : ABP_FossilsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_BP_Fossil_BigLizard_Ribcage(int32 EntryPoint, AActor* K2Node_Event_OtherActor, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
