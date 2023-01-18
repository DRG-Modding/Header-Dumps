#ifndef UE4SS_SDK_BP_Anniversary_Chandelier_HPP
#define UE4SS_SDK_BP_Anniversary_Chandelier_HPP

class ABP_Anniversary_Chandelier_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* SK_Anniversary_Chandelier_01;

    void OnRep_Random_Seed();
    void OnCollide();
    void BndEvt__BP_Anniversary_Chandelier_SK_Anniversary_Chandelier_01_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Anniversary_Chandelier(int32 EntryPoint);
};

#endif
