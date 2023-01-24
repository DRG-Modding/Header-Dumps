#ifndef UE4SS_SDK_BP_Phys_Haybale_HPP
#define UE4SS_SDK_BP_Phys_Haybale_HPP

class ABP_Phys_Haybale_C : public ABP_Kickable_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool CanSpawnParticles;

    void BndEvt__BP_Phys_Haybale_Kickable Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_Phys_Haybale_InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_Phys_Haybale(int32 EntryPoint);
};

#endif
