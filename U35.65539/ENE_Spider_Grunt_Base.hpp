#ifndef UE4SS_SDK_ENE_Spider_Grunt_Base_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Base_HPP

class AENE_Spider_Grunt_Base_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;

    bool GetIsTargetable(bool CallFunc_IsAlive_ReturnValue);
    void OnRagdoll();
    void ExecuteUbergraph_ENE_Spider_Grunt_Base(int32 EntryPoint);
}

#endif
