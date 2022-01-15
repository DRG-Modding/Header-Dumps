#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : AActor
{
    UCableComponent* CableComponent;
}

class UCableComponent : UMeshComponent
{
    bool bAttachStart;
    bool bAttachEnd;
    FComponentReference AttachEndTo;
    FName AttachEndToSocketName;
    FVector EndLocation;
    float CableLength;
    int32 NumSegments;
    float SubstepTime;
    int32 SolverIterations;
    bool bEnableStiffness;
    bool bEnableCollision;
    float CollisionFriction;
    FVector CableForce;
    float CableGravityScale;
    float CableWidth;
    int32 NumSides;
    float TileMaterial;

    void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    USceneComponent* GetAttachedComponent();
    AActor* GetAttachedActor();
}

#endif
