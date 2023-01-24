#ifndef UE4SS_SDK_ENE_Spider_Grunt_Guard_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Guard_Radioactive_HPP

class AENE_Spider_Grunt_Guard_Radioactive_C : public AENE_Spider_Grunt_Guard_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnDeathBase();
    void ExecuteUbergraph_ENE_Spider_Grunt_Guard_Radioactive(int32 EntryPoint);
};

#endif
