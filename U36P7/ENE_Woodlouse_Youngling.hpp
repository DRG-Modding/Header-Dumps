#ifndef UE4SS_SDK_ENE_Woodlouse_Youngling_HPP
#define UE4SS_SDK_ENE_Woodlouse_Youngling_HPP

class AENE_Woodlouse_Youngling_C : public AENE_Woodlouse_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void IncrementCommunityGoal();
    void ExecuteUbergraph_ENE_Woodlouse_Youngling(int32 EntryPoint);
};

#endif
