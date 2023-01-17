#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;

};

class UCableComponent : public UMeshComponent
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
    bool bUseSubstepping;
    bool bSkipCableUpdateWhenNotVisible;
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;
    bool bEnableCollision;
    float CollisionFriction;
    FVector CableForce;
    float CableGravityScale;
    float CableWidth;
    int32 NumSides;
    float TileMaterial;

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
};

#endif
