#ifndef UE4SS_SDK_BP_Snowball_HPP
#define UE4SS_SDK_BP_Snowball_HPP

class ABP_Snowball_C : AThrowableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage;
    USphereComponent* Sphere;
    UStaticMeshComponent* StaticMesh;

    void ReceiveBeginPlay();
    void Impact();
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveIgnoreCharacter(UPlayerCharacter* Character);
    void ExecuteUbergraph_BP_Snowball(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_Event_character);
}

#endif
