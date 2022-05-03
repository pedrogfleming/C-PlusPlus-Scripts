using Microsoft.AspNetCore.Mvc;
using SharedLibrary;
namespace ServerGame.Controllers
{
    [ApiController]
    [Route("[controller]")]
    public class PlayerControllers : ControllerBase
    {

        //This a group of endpoints
        [HttpGet]
        public Player Get()
        {
           var player = new Player();
           return player;
        }

    }
}
