class KMP_FootLocker_Kit extends ItemBase
{	
	ref protected EffectSound 						m_DeployLoopSound;
	protected Object								KMP_FootLocker_KitBase;
	
	void KMP_FootLocker_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override void EEInit()
	{
		super.EEInit();
	}
	
	override void OnItemLocationChanged( EntityAI old_owner, EntityAI new_owner ) 
	{
		super.OnItemLocationChanged( old_owner, new_owner );
	}	
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsDeploySound() )
		{
			PlayDeploySound();
		}
				
		if ( CanPlayDeployLoopSound() )
		{
			PlayDeployLoopSound();
		}
					
		if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
		{
			StopDeployLoopSound();
		}
	}
	
	override void SetActions()
	{
		super.SetActions();		
		
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}		
	
	//================================================================
	// ADVANCED PLACEMENT
	//================================================================			
	
    #ifdef DAYZ_1_09
    // old code
    override void OnPlacementComplete( Man player )
    {
        super.OnPlacementComplete( player );
        
        PlayerBase pb = PlayerBase.Cast( player );
        if ( GetGame().IsServer() )
        {
            PlayerBase player_base = PlayerBase.Cast( player );
            vector position = player_base.GetLocalProjectionPosition();
            vector orientation = player_base.GetLocalProjectionOrientation();
                
			KMP_FootLocker_KitBase = GetGame().CreateObject("KMP_FootLocker", pb.GetLocalProjectionPosition(), false );
			KMP_FootLocker_KitBase.SetPosition( position );
			KMP_FootLocker_KitBase.SetOrientation( orientation );

            this.Delete();            
        }    
        
        SetIsDeploySound( true );
    }
    #else
    // new code
    override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
    {
        super.OnPlacementComplete( player, position, orientation );
        
        PlayerBase pb = PlayerBase.Cast( player );
        if ( GetGame().IsServer() )
        {
            PlayerBase player_base = PlayerBase.Cast( player );
            // vector position = player_base.GetLocalProjectionPosition();
            // vector orientation = player_base.GetLocalProjectionOrientation();
                
			KMP_FootLocker_KitBase = GetGame().CreateObject("KMP_FootLocker", pb.GetLocalProjectionPosition(), false );
			KMP_FootLocker_KitBase.SetPosition( position );
			KMP_FootLocker_KitBase.SetOrientation( orientation );

            this.Delete();            
        }    
        
        SetIsDeploySound( true );
    }
    #endif
/*	
	override void OnPlacementComplete( Man player )
	{
		super.OnPlacementComplete( player );
		
		PlayerBase pb = PlayerBase.Cast( player );
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector position = player_base.GetLocalProjectionPosition();
			vector orientation = player_base.GetLocalProjectionOrientation();
				
			KMP_FootLocker_KitBase = GetGame().CreateObject("KMP_FootLocker", pb.GetLocalProjectionPosition(), false );
			KMP_FootLocker_KitBase.SetPosition( position );
			KMP_FootLocker_KitBase.SetOrientation( orientation );
		}	
		
		SetIsDeploySound( true );
	}
*/
	override bool IsDeployable()
	{
		return true;
	}	
	
	override string GetDeploySoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "BarbedWire_Deploy_loop_SoundSet";
	}
	
	void PlayDeployLoopSound()
	{		
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{		
			m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition() );
		}
	}
	
	void StopDeployLoopSound()
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{	
			m_DeployLoopSound.SoundStop();
			delete m_DeployLoopSound;
		}
	}
}
class KMP_FootLocker_Holo extends ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        }
        if ( GetNumberOfItems() == 0 )
        {
            return false;
        }
        return false;
    }
}

class KMP_FootLocker extends ItemBase
{
		override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        }
        if ( GetNumberOfItems() == 0 )
        {
            return false;
        }
        return false;
    }
}