#ifndef UE4SS_SDK_BP_Phys_InflatableSausage_HPP
#define UE4SS_SDK_BP_Phys_InflatableSausage_HPP

class ABP_Phys_InflatableSausage_C : public ABP_Kickable_Base_C
{
    class UStaticMeshComponent* UsableCollision;
    class UActorComponent* LastBounce;

};

#endif
