#ifndef UE4SS_SDK_ENE_Spider_Grunt_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Radioactive_HPP

class AENE_Spider_Grunt_Radioactive_C : public AENE_Spider_Grunt_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnDeathBase();
    void ExecuteUbergraph_ENE_Spider_Grunt_Radioactive(int32 EntryPoint);
};

#endif
