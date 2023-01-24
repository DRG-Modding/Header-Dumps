#ifndef UE4SS_SDK_BP_Anniversary_CocktailGlass_HPP
#define UE4SS_SDK_BP_Anniversary_CocktailGlass_HPP

class ABP_Anniversary_CocktailGlass_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* TallGlassParticlePos;
    class USceneComponent* ShortGlassParticlePos;
    class UNiagaraComponent* NS_Anniversary_Bubbles;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMesh* UsedMesh;
    TArray<class UStaticMesh*> CocktailMeshes;
    bool IsShortGlass;
    float ForceRequiredToBreak;
    bool IsBroken;

    void OnRep_IsBroken();
    void OnRep_UsedMesh();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_Anniversary_CocktailGlass_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_Anniversary_CocktailGlass_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Anniversary_CocktailGlass(int32 EntryPoint);
};

#endif
