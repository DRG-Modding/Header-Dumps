#ifndef UE4SS_SDK_OBJ_DD_Elimination_Eggs_HPP
#define UE4SS_SDK_OBJ_DD_Elimination_Eggs_HPP

class UOBJ_DD_Elimination_Eggs_C : public UOBJ_Eliminate_Eggs_C
{

    FObjectiveMissionIcon GetMissionIcon();
    int32 GetObjectiveAmount(float missionLength);
};

#endif
