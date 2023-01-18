#ifndef UE4SS_SDK_BP_LunarFestival_Lamp01_HPP
#define UE4SS_SDK_BP_LunarFestival_Lamp01_HPP

class ABP_LunarFestival_Lamp01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* SK_LunarFestival_Lamp_01;
    class USceneComponent* Scene;
    int32 Random_Seed;
    TArray<class UMaterialInstance*> Materials;

    void OnRep_Random_Seed();
    void ReceiveBeginPlay();
    void BndEvt__BP_LunarFestival_Lamp01_SK_LunarFestival_Lamp_01_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnCollide();
    void ExecuteUbergraph_BP_LunarFestival_Lamp01(int32 EntryPoint);
};

#endif
