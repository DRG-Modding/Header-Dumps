#ifndef UE4SS_SDK_BP_Snowball_HPP
#define UE4SS_SDK_BP_Snowball_HPP

class ABP_Snowball_C : public AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;

    void ReceiveBeginPlay();
    void Impact();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveIgnoreCharacter(class APlayerCharacter* Character);
    void ExecuteUbergraph_BP_Snowball(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_Event_character);
};

#endif
