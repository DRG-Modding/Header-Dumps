#ifndef UE4SS_SDK_ENE_Spider_Grunt_Base_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Base_HPP

class AENE_Spider_Grunt_Base_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;

    bool GetIsTargetable();
    void OnRagdoll();
    void ExecuteUbergraph_ENE_Spider_Grunt_Base(int32 EntryPoint);
};

#endif
